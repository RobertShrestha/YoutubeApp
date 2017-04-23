//
//  Playlist.h
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/21/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Playlist : NSObject
@property(strong,nonatomic) NSString * playlistName;
@property(strong,nonatomic) NSString* imgURL;
@property(strong,nonatomic) NSString* playListID;
-(NSString*)showPlaylistData;
@end
