//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface DZServerMessage : NSObject <NSCoding>
{
    _Bool _forceChoice;
    _Bool _closeApp;
    NSString *_url;
    NSString *_message;
}

@property _Bool closeApp; // @synthesize closeApp=_closeApp;
@property _Bool forceChoice; // @synthesize forceChoice=_forceChoice;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromMobileAuth:(id)arg1;

@end

