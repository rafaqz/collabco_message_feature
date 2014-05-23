;Add modules for off categories feature
core = 7.x

api = 2

projects[message][subdir] = "contrib"
projects[message][version] = "1.9"

projects[message_notify][subdir] = "contrib"
projects[message_notify][version] = "2.5"

projects[message_subscribe][subdir] = "contrib"
projects[message_subscribe][download][type] = "git"
projects[message_subscribe][download][branch] = "7.x-1.x"
projects[message_subscribe][download][revision] = "d1775a0fe091318040ecde38ce357f0a35913518"
projects[message_subscribe][download][url] = "http://git.drupal.org/project/views_arg_context.git"
projects[message_subscribe][patch][1] = https://gist.githubusercontent.com/rafaqz/e204bed024f6e8e8f463/raw/8e228629f3aaf9243d551c669a45995bd5aa84eb/fix_queue.patch

projects[views_infinite_scroll][subdir] = "contrib"
projects[views_infinite_scroll][version] = "1.1"

libraries[autopager][download][type] = "get"
libraries[autopager][download][url] = "http://jquery-autopager.googlecode.com/files/jquery.autopager-1.0.0.js"
libraries[autopager][type] = "library"

