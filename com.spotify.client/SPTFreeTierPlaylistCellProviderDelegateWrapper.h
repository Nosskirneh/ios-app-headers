//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistCellProviderDelegate-Protocol.h"

@class NSString;
@protocol SPTFreeTierPlaylistCellProviderDelegate;

@interface SPTFreeTierPlaylistCellProviderDelegateWrapper : NSObject <SPTFreeTierPlaylistCellProviderDelegate>
{
    id <SPTFreeTierPlaylistCellProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contextMenuPressedForCellProvider:(id)arg1 sender:(id)arg2;
- (void)cellProvider:(id)arg1 playTrackAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

