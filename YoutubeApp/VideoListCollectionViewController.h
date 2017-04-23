//
//  VideoListCollectionViewController.h
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/21/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoListCollectionViewController : UICollectionViewController <UICollectionViewDelegate,UICollectionViewDataSource>

@property(strong,nonatomic) NSMutableArray* videoArray;

@end
