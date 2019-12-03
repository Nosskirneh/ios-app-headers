//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHListenersAbstractCellViewModel.h"

@class NSArray, NSString;

@interface RHTrendingFollowingCellViewModel : RHListenersAbstractCellViewModel
{
    NSString *_header;
    NSString *_artistNames;
    NSArray *_members;
    NSArray *_profileTracks;
}

@property(retain, nonatomic) NSArray *profileTracks; // @synthesize profileTracks=_profileTracks;
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSString *artistNames; // @synthesize artistNames=_artistNames;
@property(readonly, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)showDetails;
- (void)play;
- (_Bool)offlinePlayableTracksAvailable;
- (id)initWithParentViewModel:(id)arg1 profileTracks:(id)arg2;

@end
