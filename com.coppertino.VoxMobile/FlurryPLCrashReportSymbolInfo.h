//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FlurryPLCrashReportSymbolInfo : NSObject
{
    NSString *_symbolName;
    unsigned long long _startAddress;
    unsigned long long _endAddress;
}

@property(readonly, nonatomic) unsigned long long endAddress; // @synthesize endAddress=_endAddress;
@property(readonly, nonatomic) unsigned long long startAddress; // @synthesize startAddress=_startAddress;
@property(readonly, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
- (void)dealloc;
- (id)initWithSymbolName:(id)arg1 startAddress:(unsigned long long)arg2 endAddress:(unsigned long long)arg3;

@end

