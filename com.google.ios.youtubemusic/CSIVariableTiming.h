//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSIVariableTiming : NSObject
{
    NSString *name_;
    double start_;
    double length_;
}

@property(nonatomic) double length; // @synthesize length=length_;
@property(nonatomic) double start; // @synthesize start=start_;
@property(readonly, nonatomic) NSString *name; // @synthesize name=name_;
- (void)resigningActive;
@property(readonly, nonatomic) _Bool isValid;
- (void)dealloc;
- (id)initWithName:(id)arg1 startTime:(double)arg2;
- (id)init;

@end

