//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSCImageFetcherDebugTiming : NSObject
{
    double startTimestamp_;
    double completedTimestamp_;
    double networkTiming_;
    unsigned long long loadedDataSize_;
    double diskLoadTiming_;
    double decodeTiming_;
}

@property(nonatomic) double decodeTiming; // @synthesize decodeTiming=decodeTiming_;
@property(nonatomic) double diskLoadTiming; // @synthesize diskLoadTiming=diskLoadTiming_;
@property(nonatomic) unsigned long long loadedDataSize; // @synthesize loadedDataSize=loadedDataSize_;
@property(nonatomic) double networkTiming; // @synthesize networkTiming=networkTiming_;
@property(nonatomic) double completedTimestamp; // @synthesize completedTimestamp=completedTimestamp_;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=startTimestamp_;
@property(readonly, nonatomic) double overheadTime;
@property(readonly, nonatomic) double totalTime;

@end

