//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class TV4Channel, UIImageView;

@interface TV4ChannelButton : UIButton
{
    TV4Channel *_channel;
    UIImageView *_logoImageView;
}

@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) TV4Channel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)selectedBackgroundImage;
- (struct CGRect)logoImageFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

