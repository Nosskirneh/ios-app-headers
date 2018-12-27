//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CellPresenter-Protocol.h"

@class NSString, PresentableTrackCellPresenter;
@protocol TrackCellDelegate;

@interface TrackCellPresenter : NSObject <CellPresenter>
{
    id <TrackCellDelegate> _trackCellDelegate;
    PresentableTrackCellPresenter *_presenter;
}

@property(retain, nonatomic) PresentableTrackCellPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <TrackCellDelegate> trackCellDelegate; // @synthesize trackCellDelegate=_trackCellDelegate;
- (void).cxx_destruct;
- (Class)cellClassForEntity:(id)arg1;
- (void)registerCellsInCollectionView:(id)arg1;
- (id)cellAccessibilityIdentifier;
- (id)cellReuseIdentifierForEntity:(id)arg1;
- (void)presentCell:(id)arg1 withEntity:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithPresenter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

