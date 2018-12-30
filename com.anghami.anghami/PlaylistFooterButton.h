//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface PlaylistFooterButton : UIButton
{
    UIColor *_darkColor;
    UIColor *_lightColor;
}

@property(retain, nonatomic) UIColor *lightColor; // @synthesize lightColor=_lightColor;
@property(retain, nonatomic) UIColor *darkColor; // @synthesize darkColor=_darkColor;
- (void).cxx_destruct;
- (id)createButtonImage:(_Bool)arg1 darkColor:(id)arg2 lightColor:(id)arg3;
- (void)sharedInitWithDarkColor:(id)arg1 lightColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 darkColor:(id)arg2 lightColor:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
