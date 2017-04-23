//
//  Playlist.m
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/21/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import "Playlist.h"

@implementation Playlist
-(NSString*)showPlaylistData{
    return [NSString stringWithFormat:@"the playlist name is %@ the playlist image url is %@ the playlist id is %@",self.playlistName,self.imgURL,self.playListID];
}

@end
