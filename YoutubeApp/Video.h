//
//  Video.h
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/21/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Video : NSObject
@property(weak,nonatomic) NSString* videoName;
@property(weak,nonatomic) NSString* videoImg;
@property(strong,nonatomic) NSString* videoID;
-(NSString*)showAllVideoData;

@end
