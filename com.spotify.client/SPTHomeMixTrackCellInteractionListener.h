//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTHomeMixTrackCellInteractionListener : NSObject
{
    id <SPTHomeMixTrackCellDelegate> _cellDelegate;
    id <SPTHomeMixTrackViewModel> _trackViewModel;
}

@property(nonatomic) __weak id <SPTHomeMixTrackViewModel> trackViewModel; // @synthesize trackViewModel=_trackViewModel;
@property(nonatomic) __weak id <SPTHomeMixTrackCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)facePileTapped:(id)arg1;
- (void)contextMenuTapped:(id)arg1;
- (id)initWithCellDelegate:(id)arg1 trackViewModel:(id)arg2;

@end

