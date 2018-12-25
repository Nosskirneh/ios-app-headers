//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMenuItemVisibilityController-Protocol.h"

@class MDXScreenManager, NSString;

@interface MDXMenuItemVisibilityController : NSObject <YTMenuItemVisibilityController>
{
    MDXScreenManager *_screenManager;
}

- (void).cxx_destruct;
- (_Bool)conditionSatisfiesRendererVisibilityConditionType:(int)arg1;
- (_Bool)shouldShowServiceItemRenderer:(id)arg1;
- (_Bool)shouldShowNavigationItemRenderer:(id)arg1;
- (id)initWithScreenManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
