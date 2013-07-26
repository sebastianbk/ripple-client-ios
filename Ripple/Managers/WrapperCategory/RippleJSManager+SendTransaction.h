//
//  RippleJSManager+SendTransaction.h
//  Ripple
//
//  Created by Kevin Johnson on 7/25/13.
//  Copyright (c) 2013 OpenCoin Inc. All rights reserved.
//

#import "RippleJSManager.h"

@interface RippleJSManager (SendTransaction)

-(void)wrapperSendTransactionAmount:(NSNumber*)amount currency:(NSString*)currency toRecipient:(NSString*)recipient withBlock:(void(^)(NSError* error))block;
-(void)wrapperIsValidAccount:(NSString*)account withBlock:(void(^)(NSError* error))block;

@end