//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLKLayout.h"

@protocol SLKLayoutItem;

@interface GVRWidgetViewLayout : SLKLayout
{
    id <SLKLayoutItem> _watermarkButton;
    id <SLKLayoutItem> _fullscreenButton;
    id <SLKLayoutItem> _cardboardButton;
}

@property(retain, nonatomic) id <SLKLayoutItem> cardboardButton; // @synthesize cardboardButton=_cardboardButton;
@property(retain, nonatomic) id <SLKLayoutItem> fullscreenButton; // @synthesize fullscreenButton=_fullscreenButton;
@property(retain, nonatomic) id <SLKLayoutItem> watermarkButton; // @synthesize watermarkButton=_watermarkButton;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)sizeOfLayoutWithFrame:(struct CGRect)arg1 updateLayout:(_Bool)arg2;

@end
