//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQueueTrack-Protocol.h"

@class NSString, NSURL, SPTPlayerTrack;

@interface SPTQueueTrackImplementation : NSObject <SPTQueueTrack>
{
    _Bool _isGrayedOut;
    _Bool _isDraggable;
    _Bool _isQueueable;
    _Bool _isRemovable;
    _Bool _isTapPlayable;
    SPTPlayerTrack *_track;
    unsigned long long _index;
}

@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly) _Bool isTapPlayable; // @synthesize isTapPlayable=_isTapPlayable;
@property(readonly) _Bool isRemovable; // @synthesize isRemovable=_isRemovable;
@property(readonly) _Bool isQueueable; // @synthesize isQueueable=_isQueueable;
@property(readonly) _Bool isDraggable; // @synthesize isDraggable=_isDraggable;
@property(readonly) _Bool isGrayedOut; // @synthesize isGrayedOut=_isGrayedOut;
@property(readonly) SPTPlayerTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
@property(readonly) _Bool isRatedExplicit;
@property(readonly, nonatomic) _Bool wasManuallyQueued;
@property(readonly) _Bool isMetaTrack;
@property(readonly) _Bool isDelimiter;
- (id)UID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long type;
@property(readonly) NSURL *imageURL;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *title;
@property(readonly) NSURL *trackURI;
- (id)initWithPlayerTrack:(id)arg1 index:(unsigned long long)arg2 grayedOut:(_Bool)arg3 draggable:(_Bool)arg4 queueable:(_Bool)arg5 removable:(_Bool)arg6 tapPlayable:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

