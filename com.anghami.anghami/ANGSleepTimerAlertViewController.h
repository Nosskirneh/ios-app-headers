//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class ANGAsyncImageView;

@interface ANGSleepTimerAlertViewController : UIAlertController
{
    _Bool _isTitleAdjusted;
    ANGAsyncImageView *_imageView;
    struct CGSize _previousImageViewSize;
}

@property _Bool isTitleAdjusted; // @synthesize isTitleAdjusted=_isTitleAdjusted;
@property struct CGSize previousImageViewSize; // @synthesize previousImageViewSize=_previousImageViewSize;
@property(retain, nonatomic) ANGAsyncImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (double)lineHeight;
- (long long)linesCount;
- (void)adjustTitle;
- (void)viewDidLayoutSubviews;
- (void)setHeaderImage:(id)arg1;

@end

