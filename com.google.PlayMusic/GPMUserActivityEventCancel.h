//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMUserActivityEvent.h"

@class NSString;

@interface GPMUserActivityEventCancel : GPMUserActivityEvent
{
    NSString *_streamAuthID;
}

@property(copy, nonatomic) NSString *streamAuthID; // @synthesize streamAuthID=_streamAuthID;
- (void).cxx_destruct;
- (id)createDetails;

@end

