//
//  Video.m
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/21/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import "Video.h"

@implementation Video
-(NSString*)showAllVideoData{
    return [NSString stringWithFormat:@"the video name is %@ video image url is %@ video id is %@",_videoName,_videoImg,_videoID];
}


@end
