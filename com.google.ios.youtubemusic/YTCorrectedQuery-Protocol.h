//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTICommand, YTIFormattedString;

@protocol YTCorrectedQuery <NSObject>
@property(readonly, nonatomic) struct _NSRange correctedQuerySubheadingEndpointRange;
@property(readonly, nonatomic) YTICommand *correctedQuerySubheadingEndpoint;
@property(readonly, nonatomic) YTIFormattedString *correctedQuerySubheading;
@property(readonly, nonatomic) struct _NSRange correctedQueryHeadingEndpointRange;
@property(readonly, nonatomic) YTICommand *correctedQueryHeadingEndpoint;
@property(readonly, nonatomic) YTIFormattedString *correctedQueryHeading;
@end
