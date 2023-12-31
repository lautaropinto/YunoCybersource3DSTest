//
//  ProtocolErrorEvent.h
//  CardinalEMVCoSDK
//
//  Copyright © 2018 Cardinal Commerce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CardinalMobile/ErrorMessage.h>

/**
 * A protocol error is any error message that is returned by the ACS or an error message that is generated by the 3DS SDK to be returned to the ACS.
 * The ProtocolErrorEvent class represents an error message of this type.
 * The SDK sends the error code and details from this error message as part of the notification to the 3DS Requestor App.
 */
@interface ProtocolErrorEvent : NSObject

- (id _Nonnull ) initWithSDKTransactionID: (nonnull NSString *) sdkTransactionID
                             errorMessage: (nonnull ErrorMessage *) errorMessage;

@property (nonatomic, strong, nonnull, readonly) NSString* sdkTransactionID;
@property (nonatomic, strong, nonnull, readonly) ErrorMessage* errorMessage;


/**
 * Returns the error message.
 * @return ErrorMessage
 */
- (nonnull ErrorMessage *) getErrorMessage;

/**
 * Returns the SDK Transaction ID.
 * @return NSString
 */
- (nonnull NSString *) getSDKTransactionID;

+ (instancetype _Nonnull )new NS_UNAVAILABLE;
- (instancetype _Nonnull )init NS_UNAVAILABLE;

@end
