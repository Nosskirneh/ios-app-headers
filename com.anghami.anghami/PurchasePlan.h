//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PurchasePlan : NSObject
{
    unsigned long long _planId;
    NSString *_name;
    NSString *_duration;
    NSArray *_methods;
    NSString *_shortInfo;
}

@property(retain) NSString *shortInfo; // @synthesize shortInfo=_shortInfo;
@property(retain) NSArray *methods; // @synthesize methods=_methods;
@property(copy) NSString *duration; // @synthesize duration=_duration;
@property(copy) NSString *name; // @synthesize name=_name;
@property unsigned long long planId; // @synthesize planId=_planId;
- (void).cxx_destruct;
- (id)initWithTBXMLElement:(struct _TBXMLElement *)arg1;

@end

