//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDXDIALScreen, NSString;

@interface DIALUpdateContext : NSObject
{
    MDXDIALScreen *_screen;
    NSString *_pairingCode;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *pairingCode; // @synthesize pairingCode=_pairingCode;
@property(nonatomic) MDXDIALScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;

@end

