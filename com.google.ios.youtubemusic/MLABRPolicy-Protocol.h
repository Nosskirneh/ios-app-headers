//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMABRPolicy-Protocol.h"

@protocol HAMTrackRenderer, MLFormatConstraint;

@protocol MLABRPolicy <HAMABRPolicy>
- (void)terminate;
- (void)setReadaheadCap:(double)arg1;
- (void)setTrackRenderer:(id <HAMTrackRenderer>)arg1;
- (void)setFormatConstraint:(id <MLFormatConstraint>)arg1;
@end

