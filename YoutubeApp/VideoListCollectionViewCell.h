//
//  VideoListCollectionViewCell.h
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/21/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoListCollectionViewCell : UICollectionViewCell
@property (strong, nonatomic) IBOutlet UIImageView *videoImage;
@property (strong, nonatomic) IBOutlet UILabel *videoName;

@end
