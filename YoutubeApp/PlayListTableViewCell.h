//
//  PlayListTableViewCell.h
//  YoutubeApp
//
//  Created by Robert Shrestha on 4/21/17.
//  Copyright © 2017 Robert Shrestha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayListTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *playListImg;
@property (weak, nonatomic) IBOutlet UILabel *playListName;

@end
