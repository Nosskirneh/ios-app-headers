//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPvCardTempBase.h"

@class NSString;

@interface XMPPvCardTempTel : XMPPvCardTempBase
{
}

+ (id)vCardTelFromElement:(id)arg1;
@property(nonatomic) __weak NSString *number;
@property(nonatomic, setter=setPreferred:) _Bool isPreferred;
@property(nonatomic, setter=setPCS:) _Bool isPCS;
@property(nonatomic, setter=setISDN:) _Bool isISDN;
@property(nonatomic, setter=setModem:) _Bool isModem;
@property(nonatomic, setter=setBBS:) _Bool isBBS;
@property(nonatomic, setter=setVideo:) _Bool isVideo;
@property(nonatomic, setter=setCell:) _Bool isCell;
@property(nonatomic, setter=setMessaging:) _Bool hasMessaging;
@property(nonatomic, setter=setPager:) _Bool isPager;
@property(nonatomic, setter=setFax:) _Bool isFax;
@property(nonatomic, setter=setVoice:) _Bool isVoice;
@property(nonatomic, setter=setWork:) _Bool isWork;
@property(nonatomic, setter=setHome:) _Bool isHome;

@end

