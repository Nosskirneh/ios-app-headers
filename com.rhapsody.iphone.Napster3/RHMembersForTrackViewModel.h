//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHMembersListViewModel.h"

@class RHTrackMO;

@interface RHMembersForTrackViewModel : RHMembersListViewModel
{
    RHTrackMO *_track;
}

@property(readonly, nonatomic) RHTrackMO *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (id)title;
- (void)viewDidAppear;
- (id)overlayText;
- (_Bool)isCurrentUserOnlyMember;
- (id)loadMembers;
- (void)dealloc;
- (id)initWithDependencies:(id)arg1 track:(id)arg2;

@end

