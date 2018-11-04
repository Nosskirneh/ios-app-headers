//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUGSThemableComponent.h"

@interface SPTHomeUIVideoCardComponent : EXP_HUGSThemableComponent
{
    unsigned long long _type;
    id <SPTVideoFeature> _videoService;
    id <SPTFeatureFlagSignal> _dataSaverFlagSignal;
    id <SPTHomeUIVideoCardLayout> _layout;
    id <SPTHomeUIVideoCardInterfaceFactory> _interfaceFactory;
}

@property(retain, nonatomic) id <SPTHomeUIVideoCardInterfaceFactory> interfaceFactory; // @synthesize interfaceFactory=_interfaceFactory;
@property(retain, nonatomic) id <SPTHomeUIVideoCardLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <SPTFeatureFlagSignal> dataSaverFlagSignal; // @synthesize dataSaverFlagSignal=_dataSaverFlagSignal;
@property(readonly, nonatomic) __weak id <SPTVideoFeature> videoService; // @synthesize videoService=_videoService;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)layoutTraits;
- (id)initWithTheme:(id)arg1 type:(unsigned long long)arg2 videoService:(id)arg3 dataSaverFlagSignal:(id)arg4 layout:(id)arg5 interfaceFactory:(id)arg6;

@end

