//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuOptions-Protocol.h"

@class NSString;
@protocol SPTContextMenuSectionHeaderDelegate;

@interface SPTFreeTierTrackContextMenuOptions : NSObject <SPTContextMenuOptions>
{
    _Bool _shouldShowScannable;
    id <SPTContextMenuSectionHeaderDelegate> _sectionHeaderDelegate;
}

@property(retain, nonatomic) id <SPTContextMenuSectionHeaderDelegate> sectionHeaderDelegate; // @synthesize sectionHeaderDelegate=_sectionHeaderDelegate;
@property(nonatomic) _Bool shouldShowScannable; // @synthesize shouldShowScannable=_shouldShowScannable;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

