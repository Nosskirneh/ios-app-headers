//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTHiddenContentTrackCellInteractionListener : NSObject
{
    id <SPTHiddenContentTrackCellDelegate> _cellDelegate;
    id <SPTHiddenContentTrackViewModel> _trackViewModel;
}

@property(nonatomic) __weak id <SPTHiddenContentTrackViewModel> trackViewModel; // @synthesize trackViewModel=_trackViewModel;
@property(nonatomic) __weak id <SPTHiddenContentTrackCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)trackPreviewButtonTouchedUpInside:(id)arg1;
- (void)contextMenuTapped:(id)arg1;
- (id)initWithCellDelegate:(id)arg1 trackViewModel:(id)arg2;

@end

