// ██╗ ██╗  ██╗   ███████╗
//████████╗ ██║ ██╔══════╝
//╚██╔═██╔╝ ██║ ██║
//████████╗ ╚═╝ ██║
//╚██╔═██╔╝ ██╗  ╚███████╗
// ╚═╝ ╚═╝  ╚═╝   ╚══════╝
//╔═╝  ╔═║╔═║╔═║╔═╝╔═║╔═║╔╔ ╔╔ ╝╔═ ╔═╝  ║  ╔═║╔═ ╔═╝║ ║╔═║╔═╝╔═╝
//║    ╔═╝╔╔╝║ ║║ ║╔╔╝╔═║║║║║║║║║ ║║ ║  ║  ╔═║║ ║║ ║║ ║╔═║║ ║╔═╝
//══╝  ╝  ╝ ╝══╝══╝╝ ╝╝ ╝╝╝╝╝╝╝╝╝ ╝══╝  ══╝╝ ╝╝ ╝══╝══╝╝ ╝══╝══╝
//Headers was written into container.h.
#include "container.h"
//For centering output.
void show_n_char(int num){
  char *space=" ";
  int count;
  for (count=1;count<=num;count++){
    putchar(space[0]);
  }
  return;
}
//Greeting information.
//As an easter agg.
void show_greetings(){
  struct winsize size;
  ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
  short row=size.ws_col;
  row-=44;
  row/=2;
  show_n_char(row);
  printf("%s\n","\033[30m               ▅▅▀▀▀▀▀▀▀▀▀▀▀▀▅");
  show_n_char(row);
  printf("%s\n","          ▅▅▀▀▀               ▀▀▅▅");
  show_n_char(row);
  printf("%s\n","     ▅▅▅▀▀            ▅           ▀▅");
  show_n_char(row);
  printf("%s\n","      ▅▀      ▅▀█▅▅▀▀▅▀▅        ▅▅  ▀▅");
  show_n_char(row);
  printf("%s\n","     ▅▀   █▅▀▀  ▀     ▀ ▀▀▅▅    █ ▀▀▅ █");
  show_n_char(row);
  printf("%s\n","    ▅▀   ▅▀  ▅▀      ▀▅    ▀▅   █▅███▀█");
  show_n_char(row);
  printf("%s\n","  ▅▅█▀▅ █ ▅▅▀          ▀▀   █   ████   █");
  show_n_char(row);
  printf("%s\n","      █ █ ▅▅▅▅▅        ▅▅▅▅▅ █  ▀█▀    █");
  show_n_char(row);
  printf("%s\n","      █ █▀ ▅▅▅ ▀      ▀ ▅▅▅ ▀█   █     █");
  show_n_char(row);
  printf("%s\n","      █ █ █\033[40;31m█▀█\033[0m\033[30m█        █\033[40;31m█▀█\033[0m\033[30m█ █   █     █");
  show_n_char(row);
  printf("%s\n","     █  █ █\033[31m███\033[30m█        █\033[31m███\033[30m█ █   █     ▀▅");
  show_n_char(row);
  printf("%s\n","    ▅▀  █  ▀▀▀          ▀▀▀  █   █      █");
  show_n_char(row);
  printf("%s\n","  ▅▀▅▀ █                     █   █      █");
  show_n_char(row);
  printf("%s\n"," █   █ ▀▅ ▅▀▅   ▅▀▅   ▅▅     █   █      ▀▅");
  show_n_char(row);
  printf("%s\n","▅█▅▅██▅ ▅██  ▀███ ▅████ ▀▅█▀▅▀   █       ▀▅");
  show_n_char(row);
  printf("%s\n","███████ ▀██████████████████▀▀             █");
  show_n_char(row);
  printf("%s\n"," █    ▀▅  ██▀ ▀██▀▀██▀▀██▀█     █▀         █");
  show_n_char(row);
  printf("%s\n"," ▀▅     ▀▀█              ▅▀     █          █");
  show_n_char(row);
  printf("%s\n","   ▀▅    █               █     ██        ▅▀");
  show_n_char(row);
  printf("%s\n","     ▀▅▅▅▀                ▀▀▀▀▀ █        █");
  show_n_char(row);
  printf("%s\n","        ▀                       ▀        ▀");
  show_n_char(row);
  printf("%s\n","           「Keep moe,keep cool」\033[0m");
  return;
}
void show_version_info(){
  printf("\033[1;38;2;254;228;208mmoe-container 1.0\n");
  printf("Copyright (C) 2022 Moe-hacker\n");
  printf("            (>_×)\n");
  printf("\n");
  printf("Permission is hereby granted, free of charge, to any person obtaining a copy\n");
  printf("of this software and associated documentation files (the \"Software\"), to deal\n");
  printf("in the Software without restriction, including without limitation the rights\n");
  printf("to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n");
  printf("copies of the Software, and to permit persons to whom the Software is\n");
  printf("furnished to do so, subject to the following conditions:\n");
  printf("\n");
  printf("The above copyright notice and this permission notice shall be included in all\n");
  printf("copies or substantial portions of the Software.\n");
  printf("\n");
  printf("THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n");
  printf("IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n");
  printf("FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n");
  printf("AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n");
  printf("LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n");
  printf("OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n");
  printf("SOFTWARE.\033[0m\n");
  return;
}
//Help pages.
void show_helps(int greetings){
  if (greetings == 1){
    show_greetings();
  }
  printf("\033[1;38;2;254;228;208mUsage:\n");
  printf("  container [options] [container directory]\n");
  printf("Options:\n");
  printf("  -v :Show version info\n");
  printf("  -h :Show helps\n");
  printf("  -u :Enable unshare feature\n");
  printf("  -U :Try to umount container,please reboot instead for better security\n");
  printf("  -d :Drop capabilities to reduce permissions of container\n");
  printf("  -D :Drop more capabilities for better security\n");
  printf("This program should be run with root privileges\n");
  printf("Unset $LD_PRELOAD before running this program to fix issues in termux\033[0m\n");
  return;
}
//Run chroot container.
void chroot_container(char *CONTAINER_DIR,int *drop_caps,int *drop_more_caps){
  //chroot into container.
  chroot(CONTAINER_DIR);
  chdir("/");
  mkdir("/sys",S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP);
  mkdir("/proc",S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP);
  mkdir("/dev",S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP);
  //Check if system runtime files are already created.
  DIR *sysmounted;
  if((sysmounted=opendir("/sys/kernel")) == NULL){
    //umount /proc for two times because in my device,it has been mounted twice.
    umount("/proc");
    umount("/proc");
    //Fix issues in archlinux containers.
    mount("/","/",NULL,MS_BIND,NULL);
    //mount proc,sys and dev.
    mount("proc","/proc","proc",MS_NOSUID|MS_NOEXEC|MS_NODEV,NULL);
    //For /sys,we make it read-only.
    mount("sysfs","/sys","sysfs",MS_NOSUID|MS_NOEXEC|MS_NODEV|MS_RDONLY,NULL);
    mount("tmpfs","/dev","tmpfs",MS_NOSUID,"size=65536k,mode=755");
    //Continue mounting some other directories in /dev.
    mkdir("/dev/pts",S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP);
    mount("devpts","/dev/pts","devpts",0,"gid=4,mode=620");
    mkdir("/dev/shm",S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP);
    mount("tmpfs","/dev/shm","tmpfs",MS_NOSUID|MS_NOEXEC|MS_NODEV,"mode=1777");
    mkdir("/dev/mqune",S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP);
    mount("mqune","/dev/mqune","mqune",0,NULL);
    //Protect some system runtime directories.
    mount("/proc/bus","/proc/bus","proc",MS_BIND|MS_RDONLY,NULL);
    mount("/proc/fs","/proc/fs","proc",MS_BIND|MS_RDONLY,NULL);
    mount("/proc/irq","/proc/irq","proc",MS_BIND|MS_RDONLY,NULL);
    mount("/proc/sys","/proc/sys","proc",MS_BIND|MS_RDONLY,NULL);
    mount("/proc/asound","/proc/asound","proc",MS_BIND|MS_RDONLY,NULL);
    mount("/proc/scsi","/proc/scsi","proc",MS_BIND|MS_RDONLY,NULL);
    mount("/sys/firmware","/sys/firmware","sysfs",MS_BIND|MS_RDONLY,NULL);
    //For making dev nodes.
    int dev;
    //Create system runtime nodes in /dev and then fix permissions.
    dev=makedev(1,3);
    mknod("/dev/null",S_IFCHR,dev);
    chmod("/dev/null",S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
    dev=makedev(5,1);
    mknod("/dev/console",S_IFCHR,dev);
    chown("/dev/console",0,5);
    chmod("/dev/console",S_IRUSR|S_IWUSR|S_IWGRP|S_IWOTH);
    dev=makedev(1,5);
    mknod("/dev/zero",S_IFCHR,dev);
    chmod("/dev/zero",S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
    dev=makedev(5,2);
    mknod("/dev/ptmx",S_IFCHR,dev);
    chown("/dev/ptmx",0,5);
    chmod("/dev/ptmx",S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
    dev=makedev(5,0);
    mknod("/dev/tty",S_IFCHR,dev);
    chown("/dev/tty",0,5);
    chmod("/dev/tty",S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
    dev=makedev(1,8);
    mknod("/dev/random",S_IFCHR,dev);
    chmod("/dev/random",S_IRUSR|S_IRGRP|S_IROTH);
    dev=makedev(1,9);
    mknod("/dev/urandom",S_IFCHR,dev);
    chmod("/dev/urandom",S_IRUSR|S_IRGRP|S_IROTH);
    mkdir("/dev/net",S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP);
    dev=makedev(10,200);
    mknod("/dev/net/tun",S_IFCHR,dev);
    //Create some system runtime link files in /dev.
    symlink("/proc/self/fd","/dev/fd");
    symlink("/proc/self/fd/0","/dev/stdin");
    symlink("/proc/self/fd/1","/dev/stdout");
    symlink("/proc/self/fd/2","/dev/stderr");
    symlink("/dev/null","/dev/tty0");
  }
  //Lower permissions by dropping caps.
  if (drop_caps){
    //Caps to drop from docker default containers.
    if(DROP_CAP_SYS_ADMIN == 1){
      cap_drop_bound(CAP_SYS_ADMIN);
    }
    if(DROP_CAP_SYS_MODULE == 1){
      cap_drop_bound(CAP_SYS_MODULE);
    }
    if(DROP_CAP_SYS_RAWIO == 1){
      cap_drop_bound(CAP_SYS_RAWIO);
    }
    if(DROP_CAP_SYS_PACCT == 1){
      cap_drop_bound(CAP_SYS_PACCT);
    }
    if(DROP_CAP_SYS_NICE == 1){
      cap_drop_bound(CAP_SYS_NICE);
    }
    if(DROP_CAP_SYS_RESOURCE == 1){
      cap_drop_bound(CAP_SYS_RESOURCE);
    }
    if(DROP_CAP_SYS_TTY_CONFIG == 1){
      cap_drop_bound(CAP_SYS_TTY_CONFIG);
    }
    if(DROP_CAP_AUDIT_CONTROL == 1){
      cap_drop_bound(CAP_AUDIT_CONTROL);
    }
    if(DROP_CAP_MAC_OVERRIDE == 1){
      cap_drop_bound(CAP_MAC_OVERRIDE);
    }
    if(DROP_CAP_MAC_ADMIN == 1){
      cap_drop_bound(CAP_MAC_ADMIN);
    }
    if(DROP_CAP_NET_ADMIN == 1){
      cap_drop_bound(CAP_NET_ADMIN);
    }
    if(DROP_CAP_SYSLOG == 1){
      cap_drop_bound(CAP_SYSLOG);
    }
    if(DROP_CAP_DAC_READ_SEARCH == 1){
      cap_drop_bound(CAP_DAC_READ_SEARCH);
    }
    if(DROP_CAP_LINUX_IMMUTABLE == 1){
      cap_drop_bound(CAP_LINUX_IMMUTABLE);
    }
    if(DROP_CAP_NET_BROADCAST == 1){
      cap_drop_bound(CAP_NET_BROADCAST);
    }
    if(DROP_CAP_IPC_LOCK == 1){
      cap_drop_bound(CAP_IPC_LOCK);
    }
    if(DROP_CAP_IPC_OWNER == 1){
      cap_drop_bound(CAP_IPC_OWNER);
    }
    if(DROP_CAP_SYS_PTRACE == 1){
      cap_drop_bound(CAP_SYS_PTRACE);
    }
    if(DROP_CAP_SYS_BOOT == 1){
      cap_drop_bound(CAP_SYS_BOOT);
    }
    if(DROP_CAP_LEASE == 1){
      cap_drop_bound(CAP_LEASE);
    }
    if(DROP_CAP_WAKE_ALARM == 1){
      cap_drop_bound(CAP_WAKE_ALARM);
    }
    if(DROP_CAP_BLOCK_SUSPEND == 1){
      cap_drop_bound(CAP_BLOCK_SUSPEND);
    }
  }
  if(drop_more_caps){
    //In docker,these caps will be kept.
    //Dropping these caps is usually not necessary.
    if(DROP_CAP_SYS_CHROOT == 1){
      cap_drop_bound(CAP_SYS_CHROOT);
    }
    if(DROP_CAP_SETPCAP == 1){
      cap_drop_bound(CAP_SETPCAP);
    }
    if(DROP_CAP_MKNOD == 1){
      cap_drop_bound(CAP_MKNOD);
    }
    if(DROP_CAP_AUDIT_WRITE == 1){
      cap_drop_bound(CAP_AUDIT_WRITE);
    }
    if(DROP_CAP_CHOWN == 1){
      cap_drop_bound(CAP_CHOWN);
    }
    if(DROP_CAP_NET_RAW == 1){
      cap_drop_bound(CAP_NET_RAW);
    }
    if(DROP_CAP_DAC_OVERRIDE == 1){
      cap_drop_bound(CAP_DAC_OVERRIDE);
    }
    if(DROP_CAP_FOWNER == 1){
      cap_drop_bound(CAP_FOWNER);
    }
    if(DROP_CAP_FSETID == 1){
      cap_drop_bound(CAP_FSETID);
    }
    if(DROP_CAP_KILL == 1){
      cap_drop_bound(CAP_KILL);
    }
    if(DROP_CAP_SETGID == 1){
      cap_drop_bound(CAP_SETGID);
    }
    if(DROP_CAP_NET_BIND_SERVICE == 1){
      cap_drop_bound(CAP_NET_BIND_SERVICE);
    }
    if(DROP_CAP_SETFCAP == 1){
      cap_drop_bound(CAP_SETFCAP);
    }
  }
  //Login to container.
  //Use exec() family function because system() is unavailable now.
  char *login[]={"/bin/su","-",NULL};
  if (execv(login[0],login) == -1){
    //Catch exceptions.
    fprintf(stderr,"\033[31mFailed to execute `/bin/su`\n");
    fprintf(stderr,"execv() returned: %d\n",errno);
    fprintf(stderr,"error reason: %s\033[0m\n",strerror(errno));
    exit(1);
  }
  return;
}
//Umount container.
void umount_container(char *CONTAINER_DIR){
  //Check if we are running with root privileges.
  if (getuid() != 0){
    fprintf(stderr,"\033[31mError: this program should be run with root privileges !\033[0m\n");
    exit(1);
  }
  //Check if container directory exists and is legitimate.
  switch(CONTAINER_DIR[0]){
    case '.':
      break;
    case '/':
      if (!CONTAINER_DIR[1]){
        fprintf(stderr,"\033[31mError: `/` is not a container directory !\n");
        exit(1);
      }
      break;
    default :
      fprintf(stderr,"\033[31mError: container directory does not exist !\033[0m\n");
      exit(1);
  }
  DIR *direxist;
  if((direxist=opendir(CONTAINER_DIR)) == NULL){
    fprintf(stderr,"\033[31mError: container directory does not exist !\033[0m\n");
    exit(1);
  }else{
    closedir(direxist);
  }
  //An easy way to get path to umount.
  chroot(CONTAINER_DIR);
  //Force umount for 10 times.
  for (int i=1;i<10;i++){
    umount2("/sys",MNT_DETACH|MNT_FORCE);
    usleep(200000);
    umount2("/dev",MNT_DETACH|MNT_FORCE);
    usleep(200000);
    umount2("/proc",MNT_DETACH|MNT_FORCE);
    usleep(200000);
    umount2("/sys",MNT_DETACH|MNT_FORCE);
    usleep(200000);
  }
  return;
}
//main() starts here.
int main(int argc,char **argv){
  //Set process name.
  prctl(PR_SET_NAME,"moe_container",NULL,NULL,NULL);
  //Check if arguments are given.
  if (argc <= 1){
    fprintf(stderr,"\033[31mError: too few arguments !\033[0m\n");
    show_helps(0);
    exit(1);
  }
  //Set default value.
  int on=1;
  int *use_unshare=NULL;
  int *drop_caps=NULL;
  int *drop_more_caps=NULL;
  char *container_dir=NULL;
  //Parse command-line arguments.
  for (int arg=1;arg<argc;arg++){
    switch(argv[arg][0]){
      case '-' :
        switch(argv[arg][1]){
          case 'v':
            show_version_info();
            exit(0);
          case 'h':
            show_helps(1);
            exit(0);
          case 'u':
            use_unshare=&on;
            break;
          case 'U':
            arg+=1;
            if(argv[arg] != NULL){
              umount_container(argv[arg]);
            }else{
              fprintf(stderr,"\033[31mError: container directory is not set !\033[0m\n");
              exit(1);
            }
            exit(0);
          case 'd':
            drop_caps=&on;
            break;
          case 'D':
            drop_caps=&on;
            drop_more_caps=&on;
            break;
          default:
            fprintf(stderr,"%s%s%s\033[0m\n","\033[31mError: unknow option `",argv[arg],"`");
            show_helps(0);
            exit(1);
        }
        break;
    case '/':
    case '.':
      container_dir=argv[arg];
      break;
    default:
      fprintf(stderr,"%s%s%s\033[0m\n","\033[31mError: unknow option `",argv[arg],"`");
      show_helps(0);
      exit(1);
    }
  }
  //Check if container directory is given.
  if (!container_dir){
    fprintf(stderr,"\033[31mError: container directory is not set !\033[0m\n");
    exit(1);
  }
  //Check if we are running with root privileges.
  if (getuid() != 0){
    fprintf(stderr,"\033[31mError: this program should be run with root privileges !\033[0m\n");
    exit(1);
  }
  //Check if $LD_PRELOAD is unset.
  char *ld_preload=getenv("LD_PRELOAD");
  if(ld_preload != NULL){
    fprintf(stderr,"\033[31mError: please unset $LD_PRELOAD before running this program or use su -c `COMMAND` to run.\033[0m\n");
    exit(1);
  }
  //Check if container directory exists.
  DIR *direxist;
  if((direxist=opendir(container_dir)) == NULL){
    fprintf(stderr,"\033[31mError: container directory does not exist !\033[0m\n");
    exit(1);
  }else{
    closedir(direxist);
  }
  //Unshare itself into new namespaces.
  if (use_unshare){
    prctl(PR_SET_NAME,"moe_unshare",NULL,NULL,NULL);
    //Try to create namespaces with unshare().
    if(unshare(CLONE_NEWNS) == -1){
      printf("\033[33mWarning: seems that mount namespace is not supported on this device\033[0m\n");
    }
    if(unshare(CLONE_NEWUTS) == -1){
      printf("\033[33mWarning: seems that uts namespace is not supported on this device\033[0m\n");
    }
    if(unshare(CLONE_NEWIPC) == -1){
      printf("\033[33mWarning: seems that ipc namespace is not supported on this device\033[0m\n");
    }
    if(unshare(CLONE_NEWPID) == -1){
      printf("\033[33mWarning: seems that pid namespace is not supported in this host\033[0m\n");
    }
    if(unshare(CLONE_NEWCGROUP) == -1){
      printf("\033[33mWarning: seems that cgroup namespace is not supported on this device\033[0m\n");
    }
    if(unshare(CLONE_NEWTIME) == -1){
      printf("\033[33mWarning: seems that time namespace is not supported on this device\033[0m\n");
    }
    if(unshare(CLONE_SYSVSEM) == -1){
      printf("\033[33mWarning: seems that semaphore namespace is not supported on this device\033[0m\n");
    }
    if(unshare(CLONE_FILES) == -1){
      printf("\033[33mWarning: seems that we could not unshare file descriptors with child process\033[0m\n");
    }
    if(unshare(CLONE_FS) == -1){
      printf("\033[33mWarning: seems that we could not unshare filesystem information with child process\033[0m\n");
    }
    //Fork itself into namespace.
    //This can fix `can't fork: out of memory` issue.
    int pid=fork();
    //Run container in the forked process.
    if (pid == 0){
      chroot_container(container_dir,drop_caps,drop_more_caps);
    }
    //Fix `can't access tty` issue.
    waitpid(pid,NULL,0);
  }else{
    //Run container directly.
    chroot_container(container_dir,drop_caps,drop_more_caps);
  }
  return 0;
}
// ██╗ ██╗  ███████╗   ████╗   ███████╗
//████████╗ ██╔════╝ ██╔═══██╗ ██╔════╝
//╚██╔═██╔╝ █████╗   ██║   ██║ █████╗
//████████╗ ██╔══╝   ██║   ██║ ██╔══╝
//╚██╔═██╔╝ ███████╗ ╚██████╔╝ ██║
// ╚═╝ ╚═╝  ╚══════╝  ╚═════╝  ╚═╝
