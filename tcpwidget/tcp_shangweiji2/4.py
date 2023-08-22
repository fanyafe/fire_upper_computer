def download_and_delete_images():
    # 连接到FTP服务器
    ftp = FTP()
    ftp.connect(host, port)
    ftp.login(username, password)
    ftp.cwd(remote_directory)

    while True:
        try:
            # 获取文件列表并按照文件名顺序排序
            file_list = ftp.nlst()
            sorted_file_list = sorted(file_list, key=extract_number)

            if len(sorted_file_list) > 0:
                filename = sorted_file_list[0]
                local_path = os.path.join(local_directory, filename)

                with open(local_path, "wb") as file:
                    ftp.retrbinary("RETR " + filename, file.write)
                print("成功下载文件：" + filename)

                # 删除已读取的图像
                ftp.delete(filename)
                print("成功删除文件：" + filename)

            time.sleep(1)  # 暂停1秒

        except Exception as e:
            print("处理文件出错：" + filename)
            print(str(e))

    # 关闭FTP连接
    ftp.quit()

if __name__ == "__main__":
    while True:
        try:
            download_and_delete_images()
        except Exception as e:
            print("程序出错：" + str(e))
