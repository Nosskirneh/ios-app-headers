//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BITPLCrashReportSignalInfo : NSObject
{
    NSString *_name;
    NSString *_code;
    unsigned long long _address;
}

@property(readonly, nonatomic) unsigned long long address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *code; // @synthesize code=_code;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithSignalName:(id)arg1 code:(id)arg2 address:(unsigned long long)arg3;

@end

