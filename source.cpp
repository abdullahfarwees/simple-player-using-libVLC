#include <bits/stdc++.h>
#include <unistd.h>
#include <vlc/vlc.h>

using namespace std;

int main()
{

    libvlc_instance_t *insta;
    insta = libvlc_new(0,NULL);
    if( insta == NULL )
    {
        cout << "unable to initialize the lib vlc" ;
    }

    libvlc_media_t *file;
    file = libvlc_media_new_path(insta ,"sample_audio.mp3");

    libvlc_media_player_t *player;
    player = libvlc_media_player_new_from_media(file);

    libvlc_media_player_play(player);
    sleep(25);
                                                         
    libvlc_media_release(file);
    libvlc_media_player_release(player);
    libvlc_release(insta);

cout << " program ends" ;
return 0;
}
