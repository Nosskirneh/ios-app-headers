//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTBrowseUIComponentFactory-Protocol.h"

@class NSString;
@protocol GLUETheme;

@interface SPTBrowseUIComponentFactoryImplementation : NSObject <SPTBrowseUIComponentFactory>
{
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)unregisterBrowseComponentsFromComponentRegistry:(id)arg1;
- (void)registerBrowseComponentsToComponentRegistry:(id)arg1;
- (id)browseHubComponents;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

