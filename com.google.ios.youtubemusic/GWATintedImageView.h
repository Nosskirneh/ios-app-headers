//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface GWATintedImageView : UIImageView
{
    UIImageView *_imageViewOff;
    UIImageView *_imageViewOn;
    _Bool _isOn;
}

- (void).cxx_destruct;
- (void)toggleAnimated:(_Bool)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1;

@end

