//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, SPTCeramicFooterCardStyle;

@protocol SPTCeramicFooterCard <GLUEStyleable>
@property(readonly, copy, nonatomic) SPTCeramicFooterCardStyle *style;
@property(readonly, nonatomic) GLUELabel *titleLabel;
- (void)glue_applyStyle:(SPTCeramicFooterCardStyle *)arg1;
@end

