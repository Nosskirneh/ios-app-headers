//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SASVASTTrackingEvent : NSObject
{
    NSString *_eventType;
    NSString *_offset;
    NSURL *_eventURL;
}

@property(retain, nonatomic) NSURL *eventURL; // @synthesize eventURL=_eventURL;
@property(retain, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

