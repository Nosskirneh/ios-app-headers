//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CellPresenter-Protocol.h"

@class NSNumberFormatter, NSString;

@interface PresentablePlaylistCellPresenter : NSObject <CellPresenter>
{
    NSNumberFormatter *_numberFormatter;
}

@property(readonly, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (void).cxx_destruct;
- (id)infoTextForRelease:(id)arg1;
- (id)durationTextForPlaylist:(id)arg1;
- (void)setAccessibilityInCell:(id)arg1 forPlaylist:(id)arg2;
- (id)textForPlaylist:(id)arg1;
- (id)imageForPlaylist:(id)arg1;
- (void)setTextsInCell:(id)arg1 forPlaylist:(id)arg2;
- (Class)cellClassForEntity:(id)arg1;
- (void)registerCellsInCollectionView:(id)arg1;
- (id)cellReuseIdentifierForEntity:(id)arg1;
- (void)presentCell:(id)arg1 withEntity:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
