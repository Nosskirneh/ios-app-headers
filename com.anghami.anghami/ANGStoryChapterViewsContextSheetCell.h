//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ANGAsyncImageView, ANGLottieAnimationView, ANGMyStoryChapterViewedOrReacted, UILabel;

@interface ANGStoryChapterViewsContextSheetCell : UITableViewCell
{
    UILabel *_userLabel;
    ANGAsyncImageView *_userProfileImageView;
    ANGLottieAnimationView *_reactionLottieView;
    ANGMyStoryChapterViewedOrReacted *_viewOrReaction;
}

@property(retain, nonatomic) ANGMyStoryChapterViewedOrReacted *viewOrReaction; // @synthesize viewOrReaction=_viewOrReaction;
@property(nonatomic) __weak ANGLottieAnimationView *reactionLottieView; // @synthesize reactionLottieView=_reactionLottieView;
@property(nonatomic) __weak ANGAsyncImageView *userProfileImageView; // @synthesize userProfileImageView=_userProfileImageView;
@property(nonatomic) __weak UILabel *userLabel; // @synthesize userLabel=_userLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
