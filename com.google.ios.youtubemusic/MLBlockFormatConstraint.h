//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLAudioFormatConstraint-Protocol.h"
#import "MLTextFormatConstraint-Protocol.h"
#import "MLVideoFormatConstraint-Protocol.h"

@class NSString, YTIAudioTrack;

@interface MLBlockFormatConstraint : NSObject <MLAudioFormatConstraint, MLTextFormatConstraint, MLVideoFormatConstraint>
{
    CDUnknownBlockType _block;
    long long _formatSelectionReason;
}

@property(readonly, nonatomic) long long formatSelectionReason; // @synthesize formatSelectionReason=_formatSelectionReason;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTIAudioTrack *audioTrack;
- (id)filterFormats:(id)arg1;
@property(readonly, nonatomic) _Bool disableTrack;
- (id)initWithBlock:(CDUnknownBlockType)arg1 formatSelectionReason:(long long)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

