//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YT608708CaptionDisplayData : NSObject
{
    NSArray *_windows;
    double _time;
}

+ (id)dataWithWindows:(id)arg1 andTime:(double)arg2;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) NSArray *windows; // @synthesize windows=_windows;
- (void).cxx_destruct;
- (id)initWithWindows:(id)arg1 andTime:(double)arg2;

@end

