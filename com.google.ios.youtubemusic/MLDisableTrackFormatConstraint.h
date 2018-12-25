//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLTextFormatConstraint-Protocol.h"
#import "MLVideoFormatConstraint-Protocol.h"

@class NSString;

@interface MLDisableTrackFormatConstraint : NSObject <MLTextFormatConstraint, MLVideoFormatConstraint>
{
}

- (id)filterFormats:(id)arg1;
@property(readonly, nonatomic) _Bool disableTrack;
@property(readonly, nonatomic) long long formatSelectionReason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
