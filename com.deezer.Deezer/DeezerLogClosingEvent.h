//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogEvent.h"

@interface DeezerLogClosingEvent : DeezerLogEvent
{
    _Bool _simulated;
}

+ (id)filePrefix;
+ (int)logPhase;
@property(nonatomic, getter=isSimulated) _Bool simulated; // @synthesize simulated=_simulated;

@end
