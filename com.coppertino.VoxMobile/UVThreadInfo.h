//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface UVThreadInfo : NSObject
{
    _Bool _Crashed;
    NSString *_Name;
    NSArray *_Trace;
    long long _Number;
}

@property(nonatomic) _Bool Crashed; // @synthesize Crashed=_Crashed;
@property(nonatomic) long long Number; // @synthesize Number=_Number;
@property(retain, nonatomic) NSArray *Trace; // @synthesize Trace=_Trace;
@property(copy, nonatomic) NSString *Name; // @synthesize Name=_Name;
- (void).cxx_destruct;
- (id)toJson;

@end

