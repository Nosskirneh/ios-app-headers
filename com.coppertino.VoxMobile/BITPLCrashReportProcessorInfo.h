//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BITPLCrashReportProcessorInfo : NSObject
{
    int _typeEncoding;
    unsigned long long _type;
    unsigned long long _subtype;
}

@property(readonly, nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) int typeEncoding; // @synthesize typeEncoding=_typeEncoding;
- (id)initWithTypeEncoding:(int)arg1 type:(unsigned long long)arg2 subtype:(unsigned long long)arg3;

@end

