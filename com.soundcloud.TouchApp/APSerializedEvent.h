//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol _TtP8Features18APEventDescripting_;

@interface APSerializedEvent : NSObject
{
    id <_TtP8Features18APEventDescripting_> _event;
    NSURL *_eventURL;
}

@property(readonly, nonatomic) NSURL *eventURL; // @synthesize eventURL=_eventURL;
@property(readonly, nonatomic) id <_TtP8Features18APEventDescripting_> event; // @synthesize event=_event;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToEvent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithEvent:(id)arg1 eventURL:(id)arg2;

@end

