//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTHomeUIVideoCardInterfaceFactory-Protocol.h"

@class NSString;
@protocol GLUETheme;

@interface SPTHomeUIVideoCardInterfaceVersion1 : NSObject <SPTHomeUIVideoCardInterfaceFactory>
{
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureCardViewAppearance:(id)arg1;
- (id)provideCallToActionView;
- (id)provideGradientView;
- (id)providePlayButton;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

