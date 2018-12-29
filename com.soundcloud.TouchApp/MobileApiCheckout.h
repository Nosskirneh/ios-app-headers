//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface MobileApiCheckout : MTLModel <MTLJSONSerializing>
{
    NSString *_checkoutToken;
    NSString *_state;
    NSString *_reason;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *checkoutToken; // @synthesize checkoutToken=_checkoutToken;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end
